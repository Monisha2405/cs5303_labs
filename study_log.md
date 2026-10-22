# Bioinformatics & CS 5303 Study Log

## 2026-08-27 — Day 1

### Completed

- Set up WSL (Ubuntu Linux), VS Code, and essential C++/Python/WSL extensions.
- Connected VS Code directly to the Linux environment.
- Mastered basic Unix navigation commands: `pwd`, `mkdir`, `cd`, `touch`, and `ls`.

### Next steps — Day 2

- Learn file copy/move commands (`cp`, `mv`) and basic text viewing in Unix.
- Initialize Git and set up a GitHub profile.

## 2026-08-28 — Day 2

### Completed

- Mastered Unix file management: `cp`, `mv`, and `rm`.
- Practiced text-stream inspection commands on sequence data: `cat`, `head`, `tail`, and `grep`.
- Created a GitHub account and configured Git identity locally.
- Initialized the first Git repository in `cs5303_labs`.

### Next steps — Day 3

- Push the local Git repository to GitHub.
- Set up a Mamba/Conda environment for bioinformatics tools.

## 2026-08-29 — Day 3

### Completed

- Linked the local Git repository to the remote GitHub repository.
- Pushed the first codebase snapshot to GitHub (`cs5303_labs`).
- Installed Miniforge/Mamba, a package and environment manager, in Linux.
- Created an isolated `bioinfo` Conda environment with Python 3.11 and Biopython.

### Next steps — Day 4

- Learn environment activation with `mamba activate bioinfo`.
- Configure VS Code workspace settings and prepare for CS 5303 C++ Week 1 materials.

## 2026-08-30 — Day 4

### Completed

- Activated the `bioinfo` Mamba environment and tested `test_biopython.py`.
- Verified that the C++ compiler (`g++`) was installed in Linux.
- Built, compiled, and executed the first C++ program (`hello_cs5303.cpp`).

### Next steps — Day 5

- Begin CS 5303 Week 1 C++ concepts: variables, data types, and output formatting.
- Receive the Program 1 assignment breakdown.

## 2026-08-31 — Day 5

### Completed

- Mastered C++ primitive data types: `int`, `double`, `char`, `string`, and `bool`.
- Practiced standard input/output using `std::cin` and `std::cout`.
- Built and tested the CS 5303 Program 1 coverage calculator (`program1.cpp`).

### Next steps — Day 6

- Learn C++ mathematical formatting with `std::fixed` and `std::setprecision`.
- Refine Program 1 edge cases and prepare the final code submission.

## 2026-09-01 — Day 6

### Completed

- Mastered `<iomanip>` column alignment using `std::setw`, `std::left`, and `std::right`.
- Verified Program 1 calculations, input handling, and output formatting.
- Learned C++ decision structures: `if`, `else if`, and `else`, with relational and logical operators.
- Built the sequencing quality evaluation program (`quality_filter.cpp`).

### Next steps — Day 7

- Explore C++ `switch` statements and nested conditions.
- Begin solving Rosalind algorithmic problems in Python.

## 2026-09-02 — Day 7

### Completed

- Mastered C++ `switch` statements, stacked `case` labels, and default fallbacks (`base_complement.cpp`).
- Activated the `bioinfo` environment and solved the first Rosalind challenge in Python (`count_nucleotides.py`).
- Verified formatted nucleotide frequency counting.

### Next steps — Day 8

- Complete the final submission check for CS 5303 Program 1.
- Introduce C++ `while` and `for` loops and solve Rosalind RNA (Transcription).

## 2026-09-03 — Day 8

### Completed

- Performed final code-quality and edge-case verification on CS 5303 Program 1.
- Tested clean compilation with the `-Wall` compiler flag.
- Learned the anatomy of C++ loops: `while` loops and count-controlled `for` loops.
- Understood counter initialization, boundary conditions, and how to avoid infinite loops.

### Next steps — Day 9

- Submit CS 5303 Program 1 on Canvas.
- Explore simple loop iteration over biological strings in Python.

## 2026-09-04 — Day 9

### Completed

- Submitted CS 5303 Program 1 on Canvas.
- Mastered the accumulator pattern (running totals) in C++ using `for` loops.
- Learned Python loop indentation and combined `for` loops with `if` conditions to manually count sequence features.

### Next steps — Day 10

- Learn sentinel values in C++ `while` loops.
- Solve the Rosalind reverse-complement problem step by step in Python.

## 2026-09-05 — Day 10

### Completed

- Mastered sentinel-controlled `while` loops in C++ using priming and update reads.
- Built the interactive quality filter program (`sentinel_filter.cpp`).
- Learned string accumulation and concatenation in Python using empty strings.
- Constructed a step-by-step DNA complement generator (`build_complement.py`).

### Next steps — Day 11

- Draft and finalize the 5-point CS 5303 Extra Credit History Paper.
- Secure the early grade bonus before Exam 1.

## 2026-09-06 — Day 11

### Completed

- Reviewed the CS 5303 syllabus extra-credit policies and sent a topic request email to Dr. Becker.
- Prepared an academic paper template for a 5-point semester grade buffer.
- Learned Python index numbering (positive and negative indices).
- Mastered Python string slicing syntax (`[start:stop:step]`) and sequence reversal using `[::-1]`.

### Next steps — Day 12

- Combine complement mapping with sequence reversal to solve Rosalind Stronghold REVC.
- Begin C++ function prototypes and return types.



## Project Files

| Item | Explanation |
|---|---|
| `aa_charge` | Compiled executable that classifies a one-letter amino-acid code by charge or hydrophobicity. |
| `aa_charge.cpp` | C++ source for amino-acid charge classification. |
| `base_complement` | Compiled executable that reports the complement of a DNA base and handles invalid input. |
| `base_complement.cpp` | C++ source for DNA single-base complement lookup. |
| `build_complement.py` | Builds and prints a DNA complement strand one base at a time. |
| `codon_checker` | Compiled executable that classifies a codon as a start, stop, or standard amino-acid codon. |
| `codon_checker.cpp` | C++ source for codon classification. |
| `count_gc_loop.py` | Counts G and C bases in a sample DNA sequence using a loop. |
| `count_nucleotides.py` | Counts A, C, G, and T in a DNA sequence and prints the counts in Rosalind format. |
| `cpp_basics` | Compiled executable for a C++ sample-summary program. |
| `cpp_basics.cpp` | C++ source that reads a sample name, read count, and GC percentage, then displays them. |
| `dna_sample.fastq` | Example FASTQ file containing three sequencing reads and their quality strings. |
| `format_demo` | Compiled executable demonstrating formatted, column-aligned output. |
| `format_demo.cpp` | C++ source demonstrating output alignment and field widths. |
| `func_intro` | Compiled executable demonstrating a simple C++ function. |
| `func_intro.cpp` | C++ source with a function that doubles an integer value. |
| `func_prototype.cpp` | C++ example of declaring a function prototype and defining it separately; calculates total bases from read count and length. |
| `gc_calculator` | Compiled executable that calculates GC percentage from nucleotide counts. |
| `gc_calculator.cpp` | C++ source for calculating total bases and GC percentage from A, T, G, and C counts. |
| `hello_cs5303` | Compiled executable that prints a CS 5303 and bioinformatics greeting. |
| `hello_cs5303.cpp` | C++ source for the greeting program. |
| `lab_menu` | Compiled executable that presents a small genomic utility menu. |
| `lab_menu.cpp` | C++ source for a menu with system-status, pipeline-display, and exit options. |
| `manual_count.py` | Counts G bases in a sample sequence with a loop and reports the running count. |
| `manual_transcribe.py` | Converts a sample DNA sequence to RNA by processing bases in a loop. |
| `ngs_budget` | Compiled executable for an NGS sequencing yield and cost estimate. |
| `ngs_budget.cpp` | C++ source that estimates total sequencing bases and cost from genome size, coverage, and price. |
| `pcr_double` | Compiled executable that simulates PCR molecule doubling across cycles. |
| `pcr_double.cpp` | C++ source for the PCR cycle simulation. |
| `pcr_temp` | Compiled executable for a temperature conversion example. |
| `pcr_temp.cpp` | C++ source that converts a denaturation temperature from Celsius to Fahrenheit. |
| `phred_eval` | Compiled executable that evaluates a Phred score and reports an error probability and quality category. |
| `phred_eval.cpp` | C++ source for converting a Phred score to error probability and assessing its quality benchmark. |
| `program1` | Compiled executable for the Program 1 sequencing coverage calculator. |
| `program1.cpp` | C++ source that calculates sequencing yield and coverage statistics from genome and read inputs. |
| `quality_filter` | Compiled executable for an interactive sequencing-read quality check. |
| `quality_filter.cpp` | C++ source that takes a read ID and mean Phred quality score for evaluation. |
| `read_accumulator` | Compiled executable that totals read lengths entered by the user. |
| `read_accumulator.cpp` | C++ source demonstrating a running total of read lengths. |
| `read_average` | Compiled executable that calculates the average read length. |
| `read_average.cpp` | C++ source that gathers read lengths and calculates their average. |
| `read_bases.py` | Iterates through a sample DNA sequence and prints each nucleotide. |
| `read_collector` | Compiled executable that collects read lengths until a sentinel value is entered. |
| `read_collector.cpp` | C++ source demonstrating sentinel-controlled input and totaling read lengths. |
| `rev_comp.py` | Builds a DNA complement and reverses it to produce the reverse complement. |
| `reverse_demo.py` | Demonstrates reversing a DNA string with Python slicing. |
| `rosalind_revc.py` | Builds and prints the reverse complement of a sample sequence for the Rosalind REVC exercise. |
| `sentinel_filter` | Compiled executable that evaluates Phred quality scores until a sentinel value is entered. |
| `sentinel_filter.cpp` | C++ source demonstrating sentinel-controlled input for quality scores. |
| `slice_primer.py` | Demonstrates extracting sequence slices and reversing a sample read. |
| `study_log.md` | Study journal recording CS 5303 and bioinformatics progress, completed topics, and next steps. |
| `test_biopython.py` | Uses Biopython’s `Seq` type to print a DNA sequence, its complement, and reverse complement. |
| `transcribe_dna_to_rna.py` | Transcribes a sample DNA sequence to RNA by replacing T with U. |
