// dna-complement-cpp.cpp

#include <iostream>
#include <string>
#include <algorithm>

std::string ComplementDNA(std::string sequence) {

    std::string complement;
    // the two string lenghts must match
    complement.resize(sequence.length());
    for (int i = sequence.length(); i >= 0; i--) {
        if (sequence[i] == *"T") {
            complement[i] = *"A";
        }
        if (sequence[i] == *"A") {
            complement[i] = *"T";
        }
        if (sequence[i] == *"C") {
            complement[i] = *"G";
        }
        if (sequence[i] == *"G") {
            complement[i] = *"C";
        }
    }

    return complement;

};


int main()
{
    // input
    std::string seq = "CAGGGACGCGATAACTTATAGACCCGCCCTACGGAACCCCCATCCCTCCTATCGTATTAGAGACCTTCGTCCCGCGCACAGCCTGTACGAAGATTGGCCTGCATGCCGACCGTGGACGCTGAACTCGGACAGCATTGTATGATCGTGACTTAACTCTCAATCATTGGTCCAGTAGTCCGACTAAGACGCACTATCTACCCAGTTGCCAACTCCTCCGAGAAAAGCGACATTTCCATATGGGGTATTATTCATTATTGCGGGGAATAGCCCGTCAGTGTCACGTATTACTAAGTTCTGCTACCGGGGCTGGCCACCGCCTTCTGGAGTGCTAAACATATTCGCATCGGTTCTGGATAGCCATGTCCACGTATCGATCATACCACGGCCCCACTAGAGAAGGGCCCGGAATCCCTTTGACAACCGTGACGAGACAGTTGTGGCAACGCATCGCAACCGCCGGGGTAACGCGGGCCACGCTACCACGTCCGTCCGAATCAATGGACCCGTCGCTTTCAGTAATGTTTAAATTATCCTGCGGAGGTGAAGTAGAGTGGATTCAGCCCAAGCCTCTTCATTTATTCTGTCTGACCCTTTGAAGGACCGTAGCGTTCTCCAAACATGGAATTTAGAACGCGCCGAAGACAACTGAGACAAGGGAGGGGTCGGCTTTAGATACAACCTGGTGCATGTATCCCACGTATATACGGTTTAGATGAGGACTGTTTGCCGCTTATGACTTGGTGCAGAGCGCAAGCAGGATGTTGTCTATCAGAGTGGCACGAGTAGCCTAACGGTGTCTGTATAATCTCATAGGACTGGCCGTG";

    std::string rev_seq = ComplementDNA(seq);

    // reversing the complement
    std::reverse(rev_seq.begin(), rev_seq.end());

    std::cout << rev_seq;

}