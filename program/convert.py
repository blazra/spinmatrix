#!/usr/bin/python2

#this script converts BW image into ARRAY in C file, one line of array means one column on display

try:
	from PIL import Image
except:
	print "please install Python Image Library"
	exit()

print "here we go!"

map_img="mapa_znaku.png"
map=Image.open(map_img,"r")
#check input image
print "width:",map.size[0]
if (map.size[0]%24):
	print "err, not dividaby by 24, not 24px per character :-"
	exit()
else:
	print  map.size[0]/24, "characters in map"
	print "ok!"

print "height:",map.size[1]
if (map.size[1]!=32):
	print "err,height is not 32, that is display jeight a both must match!"
	exit()
else:
	print "ok!"
	
#open output file
of=open("charmap.h","w")
pmap=map.load()
of.write("//cislovano je od leveho horniho rohu,\n//takze pri pohledu na display je to tam musi sunout ze spoda\n\n")
of.write("//tohle vytvoril DiGGiTuv script napsany v pythonu...\n")
of.write("const uint8_t chars[] PROGMEM = \n{\n")
line_str=""
tohex=0
for col in range (map.size[0]):
	for byte in range(4):
		line_str=line_str+"0b"
		for row in range (8):
			if (pmap[col,row+byte*8]==0):#if black....
				line_str=line_str+"1"
			else:
				line_str=line_str+"0"
		line_str=line_str+","
	if(col%24==0):
		of.write("//char number "+str(col/24)+"\n")
	if(col==map.size[0]-1):
		line_str=line_str[:-1]
	of.write("\t"+line_str+"\n")
	line_str=""

of.write("}\n")
of.write("//a to je prosim vse\n")
of.close()