#!/usr/bin/perl

package math;

sub add {
	$sum = $_[0] + $_[1];
	return $sum;
}

sub subtract {
	$sub = $_[0] - $_[1];
	return $sub;
}

1;
