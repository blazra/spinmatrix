#!/usr/bin/python2

#this script converts BW image into ARRAY in C file, one line of array means one column on display

try:#try to import Image part from PIL module
	from PIL import Image
except:
	print "please install Python Image Library\n from http://www.pythonware.com/products/pil/"
	exit()

print "here we go!"

map_img="mapa_znaku.png"
map=Image.open(map_img,"r")#open  image to read
#check input image
print "width:",map.size[0]
if (map.size[0]%24):#check width, mus be dividable by 24, for correct characters
	print "err, not dividaby by 24, not 24px per character :-"
	exit()
else:
	print  map.size[0]/24, "characters in map"
	print "ok!"

print "height:",map.size[1]
if (map.size[1]!=32):#must be 32, that is displays column sice
	print "err,height is not 32, that is display jeight a both must match!"
	exit()
else:
	print "ok!"
	
#open output file
of=open("charmap.h","w")#open output file for writing
pmap=map.load()#load pixel map for faster reading
of.write("//cislovano je od leveho horniho rohu,\n//takze pri pohledu na display je to tam musi sunout ze spoda\n\n")
of.write("//tohle vytvoril DiGGiTuv script napsany v pythonu...\n")
of.write("const uint8_t chars[] PROGMEM = \n{\n")
line_str=""#this will be buffer for line when is builded
for col in range (map.size[0]):#do if for every column
	for byte in range(4):#four separated cells (here means bytes)
		line_str=line_str+"0b"#add new byte beginning (for gcc) to line
		for row in range (8):#for bits in bytex
			if (pmap[col,row+byte*8]==0):#if black....
				line_str=line_str+"1"#this px will shine
			else:
				line_str=line_str+"0"#this will stay dark
		line_str=line_str+","#separator between bytes
	if(col%24==0):
		of.write("//char number "+str(col/24)+"\n")#separate every 24 lines with comment
	if(col==map.size[0]-1):
		line_str=line_str[:-1]#after last byte dont write comma
	of.write("\t"+line_str+"\n")#whole line data are recorded
	line_str=""#clear buffer for new line
	#go on new line and repeat

of.write("}\n")
of.write("//a to je prosim vse\n")
of.close()#and close file in the end