import os

def remove_evernote_files_and_folders(folder_path):
    for root, dirs, files in os.walk(folder_path):
        if os.path.basename(root) == ".git":
                continue
        for file in files:
            if file.startswith("Evernote"):
                os.remove(os.path.join(root, file))    
#        for dir in dirs:
#            if dir.startswith("evernote"):
#                os.rmdir(os.path.join(root, dir))
                
#remove_evernote_files_and_folders(".")

def show_html_files(folder_path):
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            if file.endswith(".html"):
                print(os.path.join(root, file))
show_html_files(".")