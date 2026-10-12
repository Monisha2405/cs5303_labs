sequence = "ACGTGCA"
g_count = 0

for base in sequence:
    if base == "G":
        g_count = g_count + 1
        print("Found a G! Total Gs so far:", g_count)

print("Final count of G bases:", g_count)