//bearing 51104 dimensions 20-35-10

difference(){
	cylinder(r=15,h=10,center=true);
	cylinder(r=10,h=11,center=true);
translate([0,12,0])rotate([90,0,0])cylinder(r=1.5,h=10,center=true);
rotate([0,0,120])translate([0,12,0])rotate([90,0,0])cylinder(r=1.5,h=10,center=true);
rotate([0,0,-120])translate([0,12,0])rotate([90,0,0])cylinder(r=1.5,h=10,center=true);
}
