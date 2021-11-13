#include <iostream>
#include <fstream>
using namespace std;

void getData();
void installing(string packageName);

class expressSetup {
public:
    void npmInitialize() {
        cout << "Initializing your repository" << endl << endl;
        system("npm init -y");
    }
    void installBasicSetup() {
        installing("Express");
        system("npm i express");
        installing("Nodemon");
        system("npm i -D nodemon");
    }
    void gitIgnore() {
        ofstream gitFile(".gitignore");
        gitFile << "node_modules/";
        gitFile.close();
    }
}setExpress;

class saprateInstallment {
public:
    void express() {
        installing("Express");
        system("npm i express");
    }
    void nodemon() {
        installing("Nodemon");
        system("npm i -D nodemon");
    }
    void ejs() {
        installing("EJS");
        system("npm i ejs");
    }
    void mongoose() {
        installing("Mongoose");
        system("npm i mongoose");
    }
    void tailwindcss() {
        installing("Tailwindcss");
        system("npm i tailwindcss");
        system("npm i autoprefixer");
        system("npm i postcss");
        system("npm i postcss-cli");
    }
    void lodash() {
        installing("Lodash");
        system("npm i lodash");
    }
    void axios() {
        installing("Axios");
        system("npm i axios");
    }
}installModules;

class folderStructure :public expressSetup {
public:
    void routePublicViews() {
        system("mkdir views");
        system("mkdir public");
        system("mkdir routes");
    }
    void serverfile() {
        ofstream MyFile("app.js");
        MyFile << "const express = require('express')\nconst app = express()\n\nconst port = 3000\n\napp.get('/', (req, res) => {\n\tres.send('Hello World!')\n})\n\napp.listen(port, () => {\n\tconsole.log(`Example app listening at http ://localhost:${port}`)\n})";
        MyFile.close();
        cout << endl << "Server file created..." << endl;
    }
    void ejsFolderStructure() {
        system("mkdir partials");
        system("mkdir views");
        system("mkdir public");

        // Create and open a text file
        ofstream MyFile("app.js");
        // Write to the file
        MyFile << "const path = require('path');const fs = require('fs');const fileName = 'index';try {fs.writeFileSync(`./views/${fileName}.ejs`,`<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF - 8\"><meta http-equiv=\"X - UA - Compatible\" content=\"IE = edge\"><meta name=\"viewport\" content=\"width = device - width, initial - scale = 1.0\"><title></title><link rel=\"stylesheet\" href=\"css/style.css\"></head><body></body></html>`);}catch (error) {console.log(`file didn't created...`);console.log('Error : ' + error);}";
        MyFile.close();
        system("node app.js");
        remove("app.js");
    }
    void tailwindcssStructure() {
        system("mkdir public");
        // make public/css directory
        ofstream MyFile("app.js");
        MyFile << "const fs = require('fs');const folderName='css';fs.mkdir(`./public/${folderName}`, { recursive: true }, function(err) {if (err) {console.log(err)} else {console.log(`${folderName} directory successfully created inside public folder`)}})";
        MyFile.close();
        system("node app.js");
        remove("app.js");

        //create public/css/tailwind.css
        ofstream tailwindCssFileCreate("app.js");
        tailwindCssFileCreate << "const fs = require('fs');const fileName = 'tailwind';try {fs.writeFileSync(`./public/css/${fileName}.css`, `@tailwind base;\n@tailwind components;\n@tailwind utilities;`);}catch (error) {console.log(`tailwind.css file didn't created...`); console.log('Error : ' + error);}";
        tailwindCssFileCreate.close();
        system("node app.js");
        remove("app.js");

        // creating config files for purge the css
        ofstream configFile1("tailwind.config.js");
        configFile1 << "module.exports = { \nmode: 'jit', \npurge: [\n'./views/**/*.ejs', \n'./views/*.ejs', \n'./public/**/*.html', \n'./public/*.html'\n], \ndarkMode: false, \ntheme: { \nextend: { \nfontFamily: {}\n }, \n }, \nvariants: { \nextend: {}, \n }, \nplugins: [], \n }";
        configFile1.close();

        ofstream configFile2("postcss.config.js");
        configFile2 << "module.exports = {\nplugins: {\ntailwindcss: {},\nautoprefixer: {},\n},\n}";
        configFile2.close();

        // compile tailwindcss file
        // 1st way
        // system("npx tailwindcss build ./public.css.tailwind.css -o ./public/css/style.css");
        // 2nd way
        system("tailwindcss -i public/css/tailwind.css -o public/css/style.css");
    }
    void databaseStructure() {
        // just creating a folder model
        system("mkdir model");
    }
}setFolder;

int userChoice;

int main() {
    do {

        // instructions for user
        system("cls");
        getData();

        // According to user's choice using switch case
        switch (userChoice) {
        case 1:
            installModules.express();
            break;
        case 2:
            installModules.nodemon();
            break;
        case 3:
            installModules.ejs();
            break;
        case 4:
            installModules.tailwindcss();
            break;
        case 5:
            installModules.lodash();
            break;
        case 6:
            installModules.axios();
            break;
        case 7:
            installModules.mongoose();
            setFolder.databaseStructure();
            break;
        case 8:
            setExpress.npmInitialize();
            setExpress.installBasicSetup();
            setExpress.gitIgnore();
            setFolder.serverfile();
            break;
        case 9:
            setExpress.npmInitialize();
            setExpress.installBasicSetup();
            setExpress.gitIgnore();
            setFolder.ejsFolderStructure();
            setFolder.serverfile();
            break;
        case 10:
            setExpress.npmInitialize();
            setExpress.installBasicSetup();
            installModules.tailwindcss();
            setExpress.gitIgnore();
            setFolder.tailwindcssStructure();
            setFolder.serverfile();
            break;
        case 11:
            setExpress.npmInitialize();
            setExpress.installBasicSetup();
            installModules.ejs();
            installModules.tailwindcss();
            setExpress.gitIgnore();
            setFolder.tailwindcssStructure();
            setFolder.ejsFolderStructure();
            setFolder.serverfile();
            break;

        default:
            cout << "Invalid Number" << endl;
            break;
        }

    } while (true);
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
    cout << "7. Install Mongoose" << endl;
    cout << endl;
    cout << "8. Install basic setup for express and nodemon" << endl;
    cout << "9. Install setup for ejs (included express and nodemon)" << endl;
    cout << "10. Install setup for Tailwindcss (include express and nodemon)" << endl;
    cout << "11. Install setup for Tailwindcss (include express, nodemon and Ejs)" << endl;
    cout << endl;
    cout << "press ctrl+c to exit from this loop" << endl;
    cout << endl;
    cout << "\"start\": \"node app.js\",\n\"dev\": \"nodemon app.js\",\n\"build\": \"postcss ./public/css/tailwind.css -o ./public/css/style.css -w\"" << endl;
    cout << endl;

    cout << "Now, What you want to do ? (enter number) : ";
    cin >> userChoice;
}

void installing(string packageName) {
    cout << endl;
    cout << "Installing " << packageName << " Package..." << endl;
    cout << endl;
}