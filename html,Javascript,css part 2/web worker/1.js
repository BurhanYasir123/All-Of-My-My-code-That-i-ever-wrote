

// Create a new web worker
const worker = new Worker('worker.js');

// Send a message to the worker
worker.postMessage(100);

// Listen for messages from the worker
worker.onmessage = function(e) {
  console.log(e.data);
};
