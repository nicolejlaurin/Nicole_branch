//
// Created by Ethan Halliday on 2019-11-04.
//

#ifndef UNTITLED_FILEMANAGER_H
#define UNTITLED_FILEMANAGER_H


#include <string>

class FileManager {
public:
    static std::string getFilePath();
    static void createNewFile(std::string fileName);
    static void writeToFile(std::string fileName);
};


#endif //UNTITLED_FILEMANAGER_H
