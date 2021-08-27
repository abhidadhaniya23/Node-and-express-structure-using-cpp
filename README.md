

# Node and express structure using c++ program

We all know, we the programmers are too lazy :sweat_smile: therefore, I created this repository :star_struck:
Following tasks cab be performed using compiled .exe file:

- Install express
- Install nodemon as dev-dependency
- Install ejs
- Install tailwindcss
- Install lodash
- Install axios
- Install basic setup for express and nodemon
- Install setup for ejs (included express and nodemon)
- Install setup for Tailwindcss (include express and nodemon)
- Install setup for Tailwindcss (include express, nodemon and Ejs)

This program will not only install package(s) but it will also create folder structures for `route`, `views`, `public` according to your need.


## Documentation

How to use it ?

Simply download .exe (compiled file of c++ program), copy to your node & express project and run it. Lastly, enter the numbers according to the list mentioned above & as per your requirement.

## Node NPM

Make sure you've installed node in your local machine.

If you don't want to download all packages from internet again & again, then download it globally. Here is the command to download any package from npm globally:


```bash
  npm install -g <package-name>
```
For example, you can download express package globally like this: `npm install -g express`

## User snippets for require packages

Create snippets to prevent writing the codes all over again.

Follow the following direction `file > preferences > user snippets` in vs-code and enter the below code to create snippet for js file.

```javascript
{
	"express": {
		"prefix": "express",
		"body": [
			"const express = require('express')",
			"const app = express()",
			"const PORT = 3000",
			"",
			"app.get('/', (req, res) => {",
			"  res.send('Hello world')",
			"});",
			"",
			"app.listen(PORT, () => {",
			"  console.log('App started at '+port)",
			"});"
		],
		"description": "express basic code"
	},
	"ejs": {
		"prefix": "ejs",
		"body": [
			"const ejs = require('ejs')"
		]
	},
	"fs": {
		"prefix": "fs",
		"body": [
			"const fs = require('fs')"
		]
	},
	"os": {
		"prefix": "os",
		"body": [
			"const os = require('os')"
		]
	},
	"path": {
		"prefix": "path",
		"body": [
			"const path = require('path')"
		]
	},
}
```
Now use prefixes like `ejs`, `express`, `fs`, `os`, `path` and you will be provided with some suggestions for the package & you can accomplish your work shortly.

## Compile c++ program using terminal

```c++
g++ -o <name-you-want-to-give> <filename.cpp>
```
You can use it like
```c++
g++ -o program program.cpp
```
Now you have the compiled .exe file.


## Contributing

Contributions are always welcomed!

If you wish to add more codes then join me to make this repository a great success.


### Thank you so much for read this documentation :)
