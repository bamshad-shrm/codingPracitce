vec1<-c(0,2,3,9,2,11,1,7) 

print (vec1)

# Accessing vector elements using position.
print (vec1[c(1,3)])

# Accessing vector elements using negative "indexing". It dose not print first and third elements.
print (vec1[c(-1,-3)])

# Accessing vector elements using logical indexing. It dose not print first and third elements.

print (vec1[c(FALSE,TRUE,FALSE,TRUE,TRUE,TRUE,TRUE,TRUE)])

# Accessing vector elements using 0/1 indexing. It dose not print first and third elements.

# question: why it makes all the values zero?

print (vec1[c(0,1,0,1,1,1,1,1)])








