#include <fstream>
#include "LettersTree.h"



int main() {
    
    LettersTree* lt = new LettersTree();

    std::ifstream fin("words.txt");
    if (fin.fail()) return 1;
    
    std::string word;
    while (std::getline(fin, word)) {
        lt->addLetter(word);
    }

    fin.close();

    // lt->show();
    lt->crushWords();
    std::cout << "-----------------------------\n";
    lt->crushWords("asb");

    

    return 0;
}
