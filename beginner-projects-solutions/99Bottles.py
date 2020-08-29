print("Lyrics of the Song 99 Bottles of Beer")
bottlecount = int(99)
confirm = int (1)
i = bottlecount
while(i>1):
    print(f"{bottlecount} bottles of beer on the wall, {bottlecount} bottles of beer. \n")
    bottlecount=bottlecount-1
    i-=1
    print(f"Take one down and pass it around, {bottlecount} bottles of beer in the wall \n\n")

print(f"{bottlecount} bottle of beer on the wall, {bottlecount} bottle of beer. \n")
print("Take one down and pass it around, no more bottle of beer in the wall \n\n")
print("No more bottles of beer on the wall, no more bottle of beer. \n")
print("Go to store and buy some more, 99 bottles of beer.")
