#This file is proposed for testing the perl DBI!

use DBI;
use DBD::mysql;

#Confiquration parameters:
$database = "perl";
$hostname = "127.0.0.1";
$user = "bamshad";
$password = "5155658";

#Connect to the database
$dsn = "dbi:mysql:$database:$hostname:3306";
$connect = DBI->connect($dsn,$user,$password) or die "Can't connect to database: $DBI::errstr\n";

#Define the query
$query = "SELECT * FROM users";
#prepare the query
$query_handle = $connect->prepare($query);
$query_handle->execute();

while ( my @row = $query_handle->fetchrow_array( ) ) {
	print "@row\n";
}














