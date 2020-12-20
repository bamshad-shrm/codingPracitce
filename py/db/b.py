import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="bamshads_bamshad",
  passwd="Bamshad_5155658",
  database="bamshads_angularjs"
)

mycursor = mydb.cursor()

mycursor.execute("SELECT * FROM customers")

myresult = mycursor.fetchall()

for x in myresult:
  print(x)
