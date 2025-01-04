#include <iostream>

std::string TranscribeDNA(std::string sequence) {
    std::string RNA;
    // the two string lenghts must match
    RNA.resize(sequence.length());
    for (int i = 0; i < sequence.length(); i++) {
        if (sequence[i] == *"T") {
            RNA[i] = *"U";
        }
        else {
            RNA[i] = sequence[i];
        }
    }
    return RNA;
};


int main()
{

    std::string seq = "GCTCTACAAGCAGTCCCAGAACTAATATTCTTCCCAAACCTCGACTGCGCGCTATACTACGGGCCAAGATCTGAACCCTGCCCGCGTAAACCAAATATTTCCCACGGTAGTTTACCTTCTGGCACCGTCCTCCTGGCAGGAAACTACGGCTGTCGGTTAGCAGCCCGACCATGCTGGACCCCTAACCACAACGAGGCCGTCTACGATCCTTCAAACAACCATAGTTGCCCGGTTTAACGCGCACCGCTCCATTATATTACTCATCTAGCATAGGTAGCCTATAGATGACCTGTGTCTTCGTAGCAAGTCCCAGGATGATACCATTGTTGGAGCTGTAGAGATGTATTTACTCTTTCGGATTCAGGGGCCTCGTTGTACATGAGATGAGCTAATCCTCGTATTCATAGGTTTGCCTATGGCCCTGGTAGTCGTATAGCCCCTTCTGCGGCGGAAATTTCTTAACCGAAGACAATTGACTCCTGCGAGAGCATGTACCATTGCGTCAGCGACAAAAGCACCTTCCCGGTAGGCGGTCGATAGCTATATTATTAAGTTTAAGCCTAGCTTCAGCGAATATGCGTTGCTATTTTATTGTGCATTTTGAGAATGAACGCCAGGGCGACTCATAGAGGTTACAAAAGACATATAGGCGACTCTCACGAGACTAAGCCAGCGATGCATAGACGGGATGATAATATCCACAGAGTTACTTTTATGATTGCCAGTTTCAGGAACTTTCTAATTGGTTTCAAGAACTGCAGAACGGGCGTCGCTTTTATCTGACGGCAATTGCGTAGATGCGCGATCAAATCGATCTGGCAAGAAGTTGAGAGAAAACGAACATTGTCTGCGCTACATGGGAATCCACGCAGGTAGAGTTGCAAATTTGCGTTTCTGACATCGCCCGCCTTGGGATAGCGACAGGTCTAGACGCTAGTTGAAAAGCAGGGTCCTACAATCATCATACCAAGAACGCTGAGCTCGT";

    std::cout << TranscribeDNA(seq);

}