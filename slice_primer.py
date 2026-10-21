full_read = "ATGCGTAACCGG"

primer = full_read[0:4]
adapter = full_read[-4:]
flipped = full_read[::-1]

print ("Primer: ", primer)
print ("Adapter: ", adapter)
print ("Reversed: ", flipped)
