"""
Rosalind Problem: Counting DNA Nucleotides (DNA)
Author: Monisha
Description: Counts occurrences of A, C, G, and T in a given DNA sequence.
"""

def count_bases(dna_sequence):
    # Standardize input to uppercase
    seq = dna_sequence.strip().upper()

    # Count each nucleotide
    count_a = seq.count('A')
    count_c = seq.count('C')
    count_g = seq.count('G')
    count_t = seq.count('T')

    return count_a, count_c, count_g, count_t

if __name__ == "__main__":
    # Sample test string
    sample_dna = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC"

    a, c, g, t = count_bases(sample_dna)

    print(f"Input Sequence: {sample_dna}\n")
    print("Rosalind Output Format (A C G T):")
    print(f"{a} {c} {g} {t}")