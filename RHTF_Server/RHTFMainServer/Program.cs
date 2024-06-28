﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;
using System.IO;
using static System.Net.Mime.MediaTypeNames;
using ProtoBuf;


namespace RHTFMainServer
{
    [ProtoContract]
    public class Account
    {
        [ProtoMember(1)]
        public string UID { get; set; }
        [ProtoMember(2)]
        public int Level { get; set; }
        public int acceptId { get; set; }
    }


    internal class Program
    {
        static void Main(string[] args)
        {
            string exe_name = "C:\\Git\\RHTF\\RHTF_Server\\x64\\Release\\RHTFStageServer.exe";
            
            // 현재, 명령어의 띄어쓰기는 제거됨
            Process.Start(exe_name, "C#에서 보내는 명령어 모음\nUID: Mgcllee, leemc\nnewAddr:127.0.0.1:7777");


            Account account = new Account
            {
                UID = "Mgcllee",
                Level = 1,
                acceptId = 1
            };

            MemoryStream serialize = new MemoryStream();
            ProtoBuf.Serializer.Serialize<Account>(serialize, account);
            byte[] byteData = serialize.ToArray();

            Console.WriteLine($"Serialize : {BitConverter.ToString(byteData)}");
            //Console.WriteLine($"Json : {}")


            //  deserialize
            MemoryStream deserialize = new MemoryStream(byteData);
            Account result = ProtoBuf.Serializer.Deserialize<Account>(deserialize);
            Console.WriteLine($"DeSerialize : {result.UID}, {result.Level}, {result.acceptId}");

            Console.WriteLine("C# 프로그램 대기중...");
            Console.ReadLine();

            // 모든 프로그램을 강.제.로. 종료시키는 반복문
            // 따라서 특정 프로그램을 종료시켜야 할 필요 있음.
            foreach (Process process in Process.GetProcesses())
            {
                // "exe_name"라는 이름을 가진 프로세스가 존재하면 true를 리턴한다.
                if (process.ProcessName.StartsWith("RHTFStageServer"))
                {
                    // 프로세스를 죽이는 함수
                    // Console.WriteLine("Kill!");
                    // process.Kill();

                    Console.WriteLine("Find!");
                }
            }

            Console.WriteLine("C# 프로그램 종료");


            // Continue;
        }
    }
}
