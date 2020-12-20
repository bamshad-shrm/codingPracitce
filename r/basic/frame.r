
# Create the data frame.
employies <- data.frame(
	empId = c (1:5), 
	empName = c("Rick","Dan","Michelle","Ryan","Gary"),
	empSalary = c(623.3,515.2,611.0,729.0,843.25), 
	# if we do not have the followig linve, we will face with "Error in data.frame(empId = c(1:5), empName = c("Rick", "Dan", "Michelle",  : 
    # argument is missing, with no default"
	# Question: what is stringsAsFactors? 
	stringsAsFactors = FALSE
)
# Print the data frame.			
print(employies)








