#!/usr/bin/perl

use lib "/home/yellow/Desktop/pracitce/languages/perl/tdd";

use math;

$addResult = math::add(8,8);

if ($addResult != 16) {
	print "The add result is wrong";
}  
else {
	print "Add: OK!\n";
}

$subResult = math::subtract(8,8);

if ($subResult != 0) {
	print "The subtract result is wrong";
}  
else {
	print "Subtract: OK!\n";
}



