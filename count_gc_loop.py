seq = "ACGTGCGC"
gc_count = 0

for base in seq:
    if base == "G" or base == "C":
        gc_count = gc_count + 1

print ("Total G and C bases:", gc_count)
