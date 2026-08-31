from Bio.Seq import Seq

# Define a sample DNA sequence
my_dna = Seq("AGCTTAGCTA")

print(f"Original Sequence : {my_dna}")
print(f"Complement        : {my_dna.complement()}")
print(f"Reverse Complement: {my_dna.reverse_complement()}")