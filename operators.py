mealCost=float(input())
tipPer=float(input())
taxPer=float(input())
tip=mealCost*(tipPer/100)
tax=mealCost*(taxPer/100)
print(round(mealCost+tip+tax))

