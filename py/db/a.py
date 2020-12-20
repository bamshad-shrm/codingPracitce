import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="bamshad",
  passwd="5155658"
)

print(mydb)
