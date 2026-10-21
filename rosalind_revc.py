seq = "GTCA"

comp = ""

for base in seq:
    if base == "A":
        comp = comp + "T"
    elif base == "T":
        comp = comp + "A"
    elif base == "C":
        comp = comp + "G"
    elif base == "G":
        comp = comp + "C"

reverseComp = comp [::-1]

print ("Reverse complement is: ", reverseComp)