# (and) - (or) - (not)
high_income = True
good_credit = False
student = False

# if(high_income or good_credit):
#     print("You are Eligble for the Funds")
# else:
#     print("You are not Eligble")

if((high_income or good_credit) and (not student)):
    print("You are eligble")
else:
    print("you are not Eligble")