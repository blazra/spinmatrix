difference()
{
	union()
	{
		cube([50,3,100]);
		translate([22,0,0])cube([6,30,100]);
	}
	translate([20,3,8])cube([10,30,84]);

	color("yellow")translate([25,10,-1])cylinder(r=1.5,h=10);		//grub hole
	color("yellow")translate([25,17.5,-1])cylinder(r=1.5,h=10);	//grub hole
	color("yellow")translate([25,25,-1])cylinder(r=1.5,h=10);		//grub hole

	color("yellow")translate([25,10,91])cylinder(r=1.5,h=10);		//grub hole
	color("yellow")translate([25,17.5,91])cylinder(r=1.5,h=10);	//grub hole
	color("yellow")translate([25,25,91])cylinder(r=1.5,h=10);		//grub hole

}

