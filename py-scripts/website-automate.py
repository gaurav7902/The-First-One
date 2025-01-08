from selenium import webdriver
from selenium.webdriver.chrome.service import Service
import time
from selenium.webdriver.common.by import By 
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

service = Service(exe_path="chromedriver")
driver = webdriver.Chrome(service=service)
driver.get("https://www.google.com")

WebDriverWait(driver,5).until(EC.presence_of_element_located((By.CLASS_NAME , "gLFyf")))


input_element = driver.find_element(By.CLASS_NAME,"gLFyf")
input_element.send_keys("Gaurav Patidar Dakshana" + Keys.ENTER)

time.sleep(15)
driver.quit()
