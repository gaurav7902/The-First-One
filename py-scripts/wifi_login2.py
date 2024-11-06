from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.chrome.service import Service
import time

# Path to your WebDriver
driver_path = '/mnt/c/Users/gaura/OneDrive - Indian Institute of Technology Indian School of Mines Dhanbad/Downloads/chromedriver_win32/chromedriver.exe'
login_url = 'http://117.250.76.233/wifi/iit/login.php'  # Replace with the actual login URL
username = 'your_username'  # Replace with actual username
password = 'your_password'  # Replace with actual password

# Initialize WebDriver with Service object
service = Service(driver_path)
driver = webdriver.Chrome(service=service)
driver.get(login_url)  # Open the login URL

# Wait for the page to load
time.sleep(2)  # Adjust this if needed based on your internet speed

try:
    # Locate the username and password fields and enter credentials
    username_field = driver.find_element(By.ID, 'cpusername')
    password_field = driver.find_element(By.ID, 'cppassword')

    username_field.send_keys(username)
    password_field.send_keys(password)

    # Locate and click the login button
    login_button = driver.find_element(By.ID, 'btnLogin')
    login_button.click()

    # Wait to ensure login is processed
    time.sleep(5)  # Increase if the Wi-Fi takes longer to connect

    # Check if login was successful (you might check for a specific element or URL)
    if "status.html" in driver.current_url:
        print("Login successful!")
    else:
        print("Login might have failed or requires further action.")

except Exception as e:
    print("An error occurred:", e)
finally:
    # Close the browser
    driver.quit()

