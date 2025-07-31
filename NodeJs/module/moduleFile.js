// const fs = require('fs');
// fs.writeFileSync("CreatedInModule1.js", "//hello there today is a funny day")
// -------------------OR---------------------------
const alpha = require('fs').writeFileSync
alpha("CreatedInModule2.js", "//this worked for second time too");


//-------------------------------------------------------------------------------------------------------------------
// console.log(__filename)