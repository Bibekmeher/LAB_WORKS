const fs=require("fs");
fs.writeFile("msg.txt","Hello world",(err)=>{
  console.log("some err occured");
});
fs.writeFile("msg.txt","Bibek is coming ....",(err)=>{
   console.log("some err occured");});
fs.appendFile("msg.txt"," 1: node js  2: express js 3: mongo DB",(err) =>{
    // console.log("💕💕💕💕💕💕");
 })