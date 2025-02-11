# Basic commands
python -m venv myenv
myenv/Scripts/Activate

python python/main.py

deactivate


# Manage pip
pip install package_name

pip freeze > python/pip_requirements.txt
pip install -r python/pip_requirements.txt
