# Basic commands
python -m venv myenv
myenv/Scripts/Activate

python main.py

deactivate


# Manage pip
pip install package_name

pip freeze > python/pip_requirements.txt
pip install -r python/pip_requirements.txt


# Kaggle

https://jamie-southchurch.medium.com/configuring-kaggle-python-api-and-downloading-data-from-a-competition-d4fad15306

https://www.kaggle.com/docs/api

Authentication

In order to use the Kaggle’s public API, you must first authenticate using an API token. Go to the 'Account' tab of your user profile and select 'Create New Token'. This will trigger the download of kaggle.json, a file containing your API credentials.

If you are using the Kaggle CLI tool, the tool will look for this token at ~/.kaggle/kaggle.json on Linux, OSX, and other UNIX-based operating systems, and at C:\Users\<Windows-username>\.kaggle\kaggle.json on Windows. If the token is not there, an error will be raised. Hence, once you’ve downloaded the token, you should move it from your Downloads folder to this folder.

If you are using the Kaggle API directly, where you keep the token doesn’t matter, so long as you are able to provide your credentials at runtime.