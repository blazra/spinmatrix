rotate([90,0,0])difference()
{
	union()
	{
		cube([50,3,80]);
		translate([17,0,2])cube([6,30,76]);
	}
	translate([15,3,9])cube([10,30,62]);

	color("yellow")translate([20,10,1])cylinder(r=1.5,h=10);		//grub hole
	color("yellow")translate([20,17.5,1])cylinder(r=1.5,h=10);	//grub hole
	color("yellow")translate([20,25,1])cylinder(r=1.5,h=10);		//grub hole

	color("yellow")translate([20,10,69])cylinder(r=1.5,h=10);		//grub hole
	color("yellow")translate([20,17.5,69])cylinder(r=1.5,h=10);	//grub hole
	color("yellow")translate([20,25,69])cylinder(r=1.5,h=10);		//grub hole

color("red")translate([27,5,70])rotate([90,0,0])cylinder(r=1.5,h=10);	//grub hole for PCB
color("red")translate([27,5,10])rotate([90,0,0])cylinder(r=1.5,h=10);	//grub hole for PCB

}

