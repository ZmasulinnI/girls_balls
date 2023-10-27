#include "Libraries.h"
#include "Function_Prototypes.h"

int charactersearchFunction(const char* fileContent, int targetWordCount)
{
    long startIndex = 0, currentIndex = 0, bufferIndex = 0, wordCount = 0, sentenceCount = 0;
    long fileSize = strlen(fileContent);
    int bufferLength;

    while (fileContent[currentIndex]) // ������� �������� � �����
    {
        if (fileContent[currentIndex] == '.' || fileContent[currentIndex] == '?' || fileContent[currentIndex] == '!')
        {
            char* sentenceBuffer = new char[fileSize + 1];

            // ����������� �������� ����������� � �����
            for (bufferIndex = startIndex; bufferIndex <= currentIndex; bufferIndex++)
                sentenceBuffer[bufferIndex - startIndex] = fileContent[bufferIndex];
            sentenceBuffer[bufferIndex - startIndex] = '\0';

            // ������� ���������� ���� � �����������
            bufferLength = bufferIndex;
            for (int charIndex = 0; charIndex < bufferLength; charIndex++)
            {
                if (isalpha(sentenceBuffer[charIndex]))
                {
                    if (isspace(sentenceBuffer[charIndex + 1]) || ispunct(sentenceBuffer[charIndex + 1]) || isdigit(sentenceBuffer[charIndex + 1]))
                        wordCount++;
                }
            }

            if (targetWordCount == wordCount) // ����� �����������, ���� ���������� ���� ������������� ���������
            {
                cout << sentenceBuffer;
                sentenceCount++;
            }

            wordCount = 0;
            startIndex = currentIndex + 1;

            delete[] sentenceBuffer;
        }
        currentIndex++;
    }
    cout << endl;

    if (0 == sentenceCount)
        cout << "����� ����������� ���!" << endl;
    cout << endl;

    return sentenceCount;
}
