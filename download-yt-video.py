import yt_dlp
import os

def download_video_cli():
    url = input("Enter YouTube URL: ").strip()
    directory = input("Enter download directory (press Enter for current): ").strip()
    
    if not directory:
        directory = os.getcwd()
        
    if not os.path.exists(directory):
        os.makedirs(directory)
        
    print("Downloading...")
    
    ydl_opts = {
        'outtmpl': os.path.join(directory, '%(title)s.%(ext)s'),
        'format': 'bestvideo+bestaudio/best',
    }
    
    try:
        with yt_dlp.YoutubeDL(ydl_opts) as ydl:
            ydl.download([url])
        print("Download completed successfully!")
    except Exception as e:
        print(f"Error: {str(e)}")

if __name__ == "__main__":
    download_video_cli()
