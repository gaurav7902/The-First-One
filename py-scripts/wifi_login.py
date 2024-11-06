import requests

# Set the login URL and credentials
LOGIN_URL = "http://your.college.wifi/login"  # Replace with actual login URL
USERNAME = "24je0619"  # Replace with your username
PASSWORD = "/////"  # Replace with your password

# Set the form data - replace 'username_field' and 'password_field' with the actual form field names
payload = {
    'username_field': username,
    'password_field': password,
    #'other_field': 'other_value'  # Add any other fields required by the form
}

# Send a POST request to log in
try:
    response = requests.post(LOGIN_URL, data=payload)

    # Check if login was successful
    if response.status_code == 200:
        print("Login successful!")
    else:
        print("Login failed. Status Code:", response.status_code)

except requests.exceptions.RequestException as e:
    print("An error occurred:", e)

