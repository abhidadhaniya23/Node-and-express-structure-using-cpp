#include <iostream>
#include <fstream>
using namespace std;

void getData();

class expressSetup {
public:
    void npmInitialize() {
        system("npm init -y");
    }
    void installBasicSetup() {
        system("npm i express");
        system("npm i -D nodemon");
    }
    void gitIgnore() {
        ofstream gitFile(".gitignore");
        gitFile << "node_modules/";
        gitFile.close();
    }
};

class saprateInstallment {
public:
    void express() {
        system("npm i express");
    }
    void nodemon() {
        system("npm i -D nodemon");
    }
    void ejs() {
        system("npm i ejs");
    }
    void tailwindcss() {
        system("npm i tailwindcss");
    }
    void lodash() {
        system("npm i lodash");
    }
    void axios() {
        system("npm i axios");
    }
};

class folderStructure :public expressSetup {
public:
    void routePublicViews() {
        system("mkdir views");
        system("mkdir public");
        system("mkdir routes");
    }
    void serverfile() {
        ofstream MyFile("server.js");
        MyFile << "const express = require('express')\nconst app = express()\nconst port = 3000\napp.get('/', (req, res) = > {\n\tres.send('Hello World!')\n})\napp.listen(port, () = > {\n\tconsole.log(`Example app listening at http ://localhost:${port}`)\n})";
        MyFile.close();
    }
    void ejsFolderStructure() {
        // also install node, express & ejs
        npmInitialize();
        installBasicSetup();
        gitIgnore();
        system("mkdir partials");
        system("mkdir views");
        system("mkdir public");

        // Create and open a text file
        ofstream MyFile("app.js");
        // Write to the file
        MyFile << "const path = require('path');const fs = require('fs');const fileName = 'index';try {fs.writeFileSync(`./views/${fileName}.ejs`,`<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF - 8\"><meta http-equiv=\"X - UA - Compatible\" content=\"IE = edge\"><meta name=\"viewport\" content=\"width = device - width, initial - scale = 1.0\"><title></title></head><body></body></html>`);}catch (error) {console.log(`file didn't created...`);console.log('Error : ' + error);}";
        MyFile.close();
        system("node app.js");
        remove("app.js");
    }
};

int userChoice;

int main() {
    // instructions for user
    system("cls");
    getData();

    // creating objects per class
    expressSetup setExpress;
    saprateInstallment installModules;
    folderStructure setFolder;

    // According to user's choice using switch case
    switch (userChoice) {
    case 1:
        installModules.express();
        getData();
        break;
    case 2:
        installModules.nodemon();
        getData();
        break;
    case 3:
        installModules.ejs();
        getData();
        break;
    case 4:
        installModules.tailwindcss();
        getData();
        break;
    case 5:
        installModules.lodash();
        getData();
        break;
    case 6:
        installModules.axios();
        getData();
        break;
    case 7:
        setExpress.npmInitialize();
        setExpress.installBasicSetup();
        setExpress.gitIgnore();
        setFolder.serverfile();
        getData();
        break;
    case 8:
        setFolder.ejsFolderStructure();
        getData();
        break;
    case 9:
        // inclomplete
        break;
    case 10:
        // incomplete
        break;

    default:
        cout << "Invalid Number" << endl;
        break;
    }

    return 0;
}

void getData() {

    cout << "\n---------------------------------------------" << endl;
    cout << endl;
    cout << "1. Install express" << endl;
    cout << "2. Install nodemon as dev-dependency" << endl;
    cout << "3. Install ejs" << endl;
    cout << "4. Install tailwindcss" << endl;
    cout << "5. Install lodash" << endl;
    cout << "6. Install axios" << endl;
    cout << endl;
    cout << "7. Install basic setup for express and nodemon" << endl;
    cout << "8. Install setup for ejs (included express and nodemon)" << endl;
    cout << "9. Install setup for Tailwindcss (include express and nodemon)" << endl;
    cout << "10. Install setup for Tailwindcss (include express, nodemon and Ejs)" << endl;
    cout << endl;
    cout << "press ctrl+c to exit from this loop" << endl;
    cout << endl;

    cout << "Now, What you want to do ? (enter number) : ";
    cin >> userChoice;

    // cout << "1. Setup basic node-express structure" << endl;
    // cout << "2. Setup full node-express folder structure" << endl;
    // cout << "3. Delete all node setup files." << endl;
}