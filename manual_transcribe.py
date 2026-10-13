dna_seq = "GATTACT"

rna_seq = ""

for base in dna_seq:
    if base == "T":
        rna_seq = rna_seq + "U"
    else:
        rna_seq = rna_seq + base

print ("Transcribed RNA: ", rna_seq)