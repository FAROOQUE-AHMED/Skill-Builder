const http = require('http');

function dataset(req, resp) {
    resp.write("<h1>hey this is working again");
    resp.end();

}
http.createServer((dataset)).listen(5000);