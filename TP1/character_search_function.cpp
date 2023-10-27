#include "Libraries.h"
#include "Function_Prototypes.h"

int charactersearchFunction(const char* fileContent, int targetWordCount)
{
    long startIndex = 0, currentIndex = 0, bufferIndex = 0, wordCount = 0, sentenceCount = 0;
    long fileSize = strlen(fileContent);
    int bufferLength;

    while (fileContent[currentIndex]) // Перебор символов в файле
    {
        if (fileContent[currentIndex] == '.' || fileContent[currentIndex] == '?' || fileContent[currentIndex] == '!')
        {
            char* sentenceBuffer = new char[fileSize + 1];

            // Копирование символов предложения в буфер
            for (bufferIndex = startIndex; bufferIndex <= currentIndex; bufferIndex++)
                sentenceBuffer[bufferIndex - startIndex] = fileContent[bufferIndex];
            sentenceBuffer[bufferIndex - startIndex] = '\0';

            // Подсчет количества слов в предложении
            bufferLength = bufferIndex;
            for (int charIndex = 0; charIndex < bufferLength; charIndex++)
            {
                if (isalpha(sentenceBuffer[charIndex]))
                {
                    if (isspace(sentenceBuffer[charIndex + 1]) || ispunct(sentenceBuffer[charIndex + 1]) || isdigit(sentenceBuffer[charIndex + 1]))
                        wordCount++;
                }
            }

            if (targetWordCount == wordCount) // Вывод предложения, если количество слов соответствует заданному
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
        cout << "Таких предложений нет!" << endl;
    cout << endl;

    return sentenceCount;
}
