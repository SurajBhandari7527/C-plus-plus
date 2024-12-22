import cv2
import os

def create_video_from_frames(frame_folder, output_video, fps=24):
    # Get the list of frame filenames
    frames = [f for f in os.listdir(frame_folder) if f.endswith(('.png', '.jpg', '.jpeg'))]
    
    # Sort frames by name (assuming they are named in a sequential manner)
    frames.sort()

    # Get the size of the first frame
    first_frame = cv2.imread(os.path.join(frame_folder, frames[0]))
    height, width, _ = first_frame.shape
    
    # Create a video writer object
    fourcc = cv2.VideoWriter_fourcc(*'XVID')  # Codec
    video_writer = cv2.VideoWriter(output_video, fourcc, fps, (width, height))

    for frame in frames:
        # Read each frame
        img = cv2.imread(os.path.join(frame_folder, frame))
        video_writer.write(img)  # Write the frame to the video

    video_writer.release()  # Finalize the video file
    print(f"Video saved as {output_video}")

# Set parameters
frame_folder = 'C:/tmp'  # Replace with your frame folder path
output_video = 'output_video.mp4'  # Output video file name
fps = 24  # Frames per second

# Create video from frames
create_video_from_frames(frame_folder, output_video, fps)
