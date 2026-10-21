# Sample DNA sequence
dna = "AAAACCCGGT"

# Step 1: Build the complement strand letter-by-letter
comp = ""
for base in dna:
    if base == "A":
        comp = comp + "T"
    elif base == "T":
        comp = comp + "A"
    elif base == "C":
        comp = comp + "G"
    elif base == "G":
        comp = comp + "C"

# Step 2: Reverse the complement string using slicing
rev_comp = comp[::-1]

# Step 3: Print the results
print("Original Sequence  :", dna)
print("Complement Sequence:", comp)
print("Reverse Complement :", rev_comp)