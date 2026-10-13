dna_strand = "ATGC"
complement_strand = ""

for base in dna_strand:
    if base == "A":
        complement_strand = complement_strand + "T"
    elif base == "T":
        complement_strand = complement_strand + "A"
    elif base == "C":
        complement_strand = complement_strand + "G"
    elif base == "G":
        complement_strand = complement_strand + "C"
    else:
        complement_strand = complement_strand + "N"

print("Original Strand  :", dna_strand)
print("Complement Strand:", complement_strand)