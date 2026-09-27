#include<iostream>
using namespace std;
class SocialMediaUploader{
	public:
		virtual void UploadContent(){
			cout<<"upload content to social media \n";
		}
};
class InstagramUploader : public SocialMediaUploader{
	public:
		void UploadContent() override{
			cout<<"Instragram uploading photo or reel \n";
		}
};
class YouTubeUploader :public SocialMediaUploader{
	public:
		void UploadContent() override{
			cout<<"YouTube uploading video \n";
		}
};
int main(){
	InstagramUploader insta;
	YouTubeUploader yutu;
	insta.UploadContent();
	yutu.UploadContent();
	return 0;
}
