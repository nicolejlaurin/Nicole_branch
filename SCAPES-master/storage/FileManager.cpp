//
// Created by Ethan Halliday on 2019-11-04.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include "FileManager.h"

std::string FileManager::getFilePath() {
    std::string fileName;
    std::cout << "Please enter the path to the file you wish to open: " << std::endl;
    std::cin >> fileName;
    std::cout << "Opening " << fileName << std::endl;
    return fileName;
}

void FileManager::createNewFile(std::string fileName) {
    std::ofstream outfile (fileName);
    outfile.close();
}

void FileManager::writeToFile(std::string fileName) {

}
