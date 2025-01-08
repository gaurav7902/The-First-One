from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
import time

# Initialize WebDriver
driver = webdriver.Chrome()  # Replace with the path to your WebDriver if needed
driver.get("https://abhikalp.iitism.ac.in/class_material/student")  # Update with your URL

# Log in if necessary
username = driver.find_element(By.ID, "username")  # Replace with the actual ID of the username field
password = driver.find_element(By.ID, "password")  # Replace with the actual ID of the password field
username.send_keys("your_username")  # Replace with your username
password.send_keys("your_password")  # Replace with your password
driver.find_element(By.ID, "login_button").click()  # Replace with the login button ID or selector

# Wait for the page to load
time.sleep(3)

# Find and iterate through folders
folders = driver.find_elements(By.CLASS_NAME, "folder-class-name")  # Replace with actual class name
for folder in folders:
    folder.click()  # Open folder
    time.sleep(2)  # Wait for content to load

    # Extract folder content
    materials = driver.find_elements(By.CLASS_NAME, "material-class-name")  # Replace with actual class name
    for material in materials:
        print(material.text)  # Print or save the content details

# Close the browser
driver.quit()

