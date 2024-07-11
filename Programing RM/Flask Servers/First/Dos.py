import threading
import requests

# Define the URL of your Flask server
server_url = "http://localhost:5000/?data=0986986969869869867979873987598664976356296582769529659652659628756827634875648756"

# Define the function to send requests
def send_request(thread_id):
    try:
        for i in range(0,100):
            response = requests.get(server_url)
    except Exception as e:
        pass

# Create 10 threads and start sending requests
threads = []
for i in range(100):
    thread = threading.Thread(target=send_request, args=(i,))
    threads.append(thread)
    thread.start()

# Wait for all threads to complete
for thread in threads:
    thread.join()

# No print statements here
