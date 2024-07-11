function factorial(n) {
    if (n === 0 || n === 1) {
      return 1;
    } else {
      return n * factorial(n - 1);
    }
  }
  
  onmessage = function(e) {
    // This is the function that will be called when the worker receives a message
    // It calculates the factorial of the number passed in the message
    const result = factorial(e.data);
    // Then, use postMessage to send the result back to the main thread
    postMessage(result);
  };
  