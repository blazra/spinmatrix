difference(){
	cylinder(r=24,h=15,center=true);

	translate([0,0,2])cylinder(r=21,h=12,center=true);
	cylinder(r=15,h=16,center=true);
	translate([0,-25,-25])cube(50);
	rotate([90,0,0])cylinder(r=2,h=50,center=true);
	rotate([0,90,0])cylinder(r=2,h=50,center=true);
}

