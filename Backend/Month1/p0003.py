# strings fuctions
StringOne = "moutaz sami"
print(StringOne.upper())
print(StringOne.lower())
print(StringOne.title())
print("String One : " + StringOne)

StringTwo = StringOne.upper()
print("String Two : " + StringTwo)
StringTwo.strip() # remove the whitespaces before and after the string
print(StringTwo.find("SA"))
print(StringTwo.replace("S" , "T"))
print("AMI" in StringTwo)
print("AMI" not in StringTwo)
