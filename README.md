
# Node and express structure using c++ program

We know that, we all programmers are too lazy :sweat_smile: So that I created this repository :star_struck:
You can do some below tasks using compiled .exe file.

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


## Documentation

How to use it ?

You can simply download .exe (compiled file of c++ program) and run it. Then you saw some instructions and you can enter number according what you want to do !

## Node NPM

Make sure you installed node in your local machine.

If you don't want to download all packages from internet everytime then download it for global. Here is the command to download any package from npm globally


```bash
  npm install -g <package-name>
```
For example you can download express package for globally like this type `npm install -g express`

## User snippets for require packages

you can create user snippets for don't write code many time.

You can go `file > preferences > user snippets` in vs-code and create snippets for js file.

Enter below code in snippets file

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
Now you can use prefix like `ejs`, `express`, `fs`, `os`, `path` and you will get some suggetions for require that package And you don't need to write full line to require any package. You can create more snippets like this type.

## Compile c++ program using terminal

```c++
g++ -o <name-you-want-to-give> <filename.cpp>
```
You can use it like
```c++
g++ -o program program.cpp
```
And you got compiled .exe file.


## Contributing

Contributions are always welcome!

If you want to add more code and please help me to make this great repository.


### Thank you so much for read this documentation :)
